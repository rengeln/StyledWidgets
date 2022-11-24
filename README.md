# StyledWidgets

This plugin for Unreal Engine 5 allows you to create CSS-inspired style sheets to define the appearance of your in-game UI.
It is designed to improve your iteration speed and allow you to deploy and update UI themes across your entire game in
very little time.

If you have experience with web development, you will likely find this system quite intuitive, as it is based
on the same principle as CSS.

There are three components to this plugin:

* A collection of Styled Widgets which you use in place of regular widgets. For example, there is a Text (Styled) widget
  which fulfills the same role as a Text widget, while supporting the styling engine. Additionally, there is a StyledUserWidget
  that allows you to leverage the styling engine for your own UMG widgets.

* The style sheet editor, which allows you to create styles and define how they are applied using CSS-like selectors.

* The styling engine itself, which generates styles on-demand for widgets, and can refresh them in real-time when the
  style sheet is modified or swapped out.

## Getting Started

In the plugin's Content folder is an example widget, as well as a map which allows you to explore how the widget 
behaves at runtime. A default style sheet is also provided.

### (Styled) Widgets

After installing the plugin you will have a new set of widgets available under the *Styled* category. The plugin does
not alter the behavior of the normal UMG widgets, and you can use both types as needed. 

When you add a styled widget to your widget blueprint, you will notice that it is missing many of the options normally
found under the `Appearance` category. That is because the appearance of a styled widget comes from the style sheet.

These widgets also have several properties under the `Style` category. The most important is the `Style Tags` property.
Tags are the equivalent of classes in CSS-- they determine which styles are applied to which widgets. A tag is just
an arbitrary name, and you can add multiple tags separated by spaces.

An important property of tags is that, by default, a widget inherits all the tags of its parents. For example, if
you have a border widget tagged with `dialog`, and you place a button in it, that button will inherit the `dialog`
tag. You can then use it to apply a different style to buttons which are within a dialog.

### Style Sheets

Create a style sheet by selecting "Widget Style Sheet" in the create asset menu, under the User Interface category.
This will open the style sheet editor. However, any changes you make to this style sheet won't be reflected in
your widgets yet. That is because only one style sheet may be active at a time. You can set the default style
sheet in Project Settings, under Plugins > Styled Widgets. Once you point this at your new style sheet, it will
apply globally to all widgets in your project.

![image](https://user-images.githubusercontent.com/1334849/203667405-7f5c9cc0-dc49-4205-9512-9b9cce946f66.png)
*The style sheet editor.*

The style sheet editor allows you to create new styles. Each style is specific to a certain widget type. When
you select a style in the list, you can choose which properties it will provide. Like CSS, styles are *cascaded*,
meaning the final style is built up by applying many individual style definitions, each of which can choose which
properties it will add.

The selector field in a style definition determines which widgets it will apply to. At the simplest level, this
can be just a list of style tags; the style will apply to each widget that has *all* of those tags. (If the style
definition has an empty selector, it will apply to *all* widgets of that type. This is useful for creating
sensible defaults.)

For example, if you create a new button style and give it the selector `dialog`, it will apply to all buttons
which have the `dialog` style tag.

When multiple styles are applied to the same widget, they apply in the order of less specific to more specific.
Most of the time specificity is simply the number of matching tags: a style which has 3 tags in its selector will
be applied after a style with only 2. And a style with an empty selector is applied first. 

When you make any change in a style sheet, it is reflected instantly in all widget editors as well as running
game instances. This allows you to edit your styles and see them reflected in real-time in a play-in-editor game.
You can even drag the cursor around a color wheel and see the colors change instantly in game!

### Interactivity

Interactive widgets typically want to change their appearance based on user input, or when their state changes.
This is handled by automatically adding or removing certain tags based on a widget's state and user input:

* `hovered` is added when the mouse is currently over a widget. (Requires `Is Hoverable` to be checked in the widget's properties.)
* `focused` is added when the widget currently has user focus. (Requires `Is Focusable` to be checked in the widget's properties.)
* `pressed` is added when the widget is currently being clicked, or activated via keyboard or controller input. 
  (Requires `Is Clickable` to be checked in the widget's properties.)
* `disabled` is added when the widget is in the disbled state. Styled widgets override the default Slate behavior
  or rendering disabled widgets semi-transparently, giving you full control over their appearance.

![image](https://user-images.githubusercontent.com/1334849/203667184-7cb148d3-ba6a-4bfe-8016-dd765e493936.png)
*Example of using the `disabled` tag to change the background color of a button.*

Because these states are implemented as style tags, you have the full power of the styling engine to determine
how they effect a widget's appearance.

### Color Palette

Standardizing colors is an important part of any UI design workflow. Style sheets have a built in mechanism to
support this: the color palette. The palette allows you to designate a set of named colors. Then, in any style
with a color property, you can click a button to open up a menu allowing you to select one of these named colors.

![image](https://user-images.githubusercontent.com/1334849/203667052-f76380b1-fb66-482a-a14a-255580cc4756.png)
*Example of using the color palette to set a color property in a style.*

If, at a later time, you want to change the color, you can update it within the color palette. You will then
be asked if you want to update all instances of that color across all styles.

## Advanced Features

Here is an abbreviated list of some of the more advanced capabilities of this plugin.

### Styled User Widgets

You can use the styling engine to apply to your own UMG widgets. First, create a new blueprint class that
inherits from WidgetStyleBase. Add variables to this class for each of the style properties you want to
expose to the style sheet.

Next, create a widget and inherit from StyledUserWidget rather than UserWidget. Set the Style Class property
to the blueprint style class you made. Finally, override the Apply Style function. Cast the input to the
style class you made, and then you can read its values and use them to style your widget.

### Identifiers

All styled widgets have an `Identifier` field (under the `Behavior` category.) This can be used to uniquely
identify a widget to the styling engine, similar to an element ID in HTML. In a style selector, putting
a hashtag before a token causes it to match by identifier rather than tags. 

Identifier matching is considered higher priority than style tag matching, using the same algorithm as CSS.

### Changing Tags at Runtime

Every styled widget implements the `IStyledWidgetInterface` interface. This provides blueprint-exposed
functions which allow you to add, remove, or toggle style tags at runtime. 

### Swapping Style Sheets at Runtime

You can change the current style sheet at runtime, which will cause all active widgets to automatically
restyle themselves. To do so, use the WidgetStyleManager class, which is a GameInstance subsystem.

### Advanced Selectors

In some cases it may be necessary to resolve ambiguities about the order in which styles should be applied
to a widget. In a selector string, you can prefix a token with `!` to invert it and only match widgets that
do not have the given tag. You can also use the `+` prefix, which will match that tag at a higher priority.
