
// millet dumplings
Recipe panko_crusted_jackfruit = create_recipe("Panko Crusted Jackfruit", maindish, "Serves 6", 2024122, 120);
set_description(&panko_crusted_jackfruit, "<p>Recipe taken from Cornucopia The Green Cookbook!</p><p>Noted Footnote: <br>Made this for my 25th birthday! First recipe out of this book and pleasantly surprised by the complexity of this flavor :)</br><br>(and made for a nice workday picnic lunch the next day)</br></p>");
// Noted footnote from our experience: <br>Made this for my 25th birthday! First recipe out of this book and pleasantly surprised by the complexity of flavor :) (and it made a nice workday picnic lunch the next day)</br></p>");
RecipePart panko_crusted_jackfruit_main = create_part("Main Ingredients");
add_serving(&panko_crusted_jackfruit_main, &jackfruit, "2x400-500g tins");
add_serving(&panko_crusted_jackfruit_main, &tofu, "100 g, firm, crumbled");
add_serving(&panko_crusted_jackfruit_main, &tamari, "100 ml, can replace with soy sauce");
add_serving(&panko_crusted_jackfruit_main, &rice_vinegar, "3 tablespoons");
add_serving(&panko_crusted_jackfruit_main, &dijon_mustard, "1 tablespoon");
add_serving(&panko_crusted_jackfruit_main, &toasted_sesame_oil, "2 teaspoons");
add_serving(&panko_crusted_jackfruit_main, &wakame, "20 grams dried, soaked in 120ml water for 30 mins");
add_serving(&panko_crusted_jackfruit_main, &kelp_powder, "2 teaspoons");
add_serving(&panko_crusted_jackfruit_main, &shichimi_togarashi, "1 teaspoon");
add_serving(&panko_crusted_jackfruit_main, &panko, "40 g, extra for coating");
add_serving(&panko_crusted_jackfruit_main, &cornflour, "1 tablespoon");
add_serving(&panko_crusted_jackfruit_main, &rapeseed_oil, "can replace with other oil");
add_part(&panko_crusted_jackfruit, &panko_crusted_jackfruit_main);
RecipePart panko_crusted_jackfruit_squash_puree = create_part("Squash Puree");
add_serving(&panko_crusted_jackfruit_squash_puree, &butternut_squash, "2, peeled and cubed");
add_serving(&panko_crusted_jackfruit_squash_puree, &creamed_coconut, "100 g, soaked in 400ml of hot water");
add_serving(&panko_crusted_jackfruit_squash_puree, &toasted_sesame_oil, "1 teaspoon");
add_serving(&panko_crusted_jackfruit_squash_puree, &salt, "dash or sprinkle");
add_serving(&panko_crusted_jackfruit_squash_puree, &rapeseed_oil, "can be replaced with other oil like avocado");
add_part(&panko_crusted_jackfruit, &panko_crusted_jackfruit_squash_puree);
RecipePart panko_crusted_jackfruit_with = create_part("Serve With");
add_serving(&panko_crusted_jackfruit_with, &caramelised_onions, "serve hot");
add_serving(&panko_crusted_jackfruit_with, &chilled_pickled_cucumbers, "homemade");
add_part(&panko_crusted_jackfruit, &panko_crusted_jackfruit_with);
RecipePart panko_crusted_jackfruit_advance = create_part("Advanced Preparation");
add_instruction(&panko_crusted_jackfruit_advance,"Consider pre-preparing the squash and onions the day before (the cucumber pickle is best prepared that day). Soak the dried wakame for 30 minutes before using.");
add_part(&panko_crusted_jackfruit, &panko_crusted_jackfruit_advance);
RecipePart panko_crusted_jackfruit_method = create_part("Method");
add_instruction(&panko_crusted_jackfruit_method,"Preheat the Oven to 190 degrees Celsius (374 degrees Fahrenheit).");
add_instruction(&panko_crusted_jackfruit_method,"To make the squash puree, coat the cubes in a little rapeseed oil,spread out on the parchment-lined tray and bake in the oven for about 20 minutes until tender. Puree the cooked squash with the melted coconut, water and sesame oil until smooth (in batches, if using a high-speed blender) and set aside.");
add_instruction(&panko_crusted_jackfruit_method,"Prepare the pickled cucumber and caramelised onions according to the toppings recipes pages for each item.");
add_instruction(&panko_crusted_jackfruit_method,"To make the jackfruit fillets, rinse the jackfruit and break up the flesh with your fingers. Remove the pointed tips and chop finely. Briefly pulse the shredded flesh and chopped tips in a food processor (you'll need to do this in batches), then put in a large mixing bowl with all other ingredients except the panko and cornflour. Mix well to combine, check the seasoning and then fold in the panko crumbs and cornflour.");
add_instruction(&panko_crusted_jackfruit_method,"Pour a little extra panko onto a dinner plate. Using clean hands, press a sixth of the jackfruit mixture into a barrel shape and roll this in the panko to coat the sides, top and bottom. Flatten the barrel slightly into a rectangular fillet and place it on a second clean plate. Repeat with the remaining mixture, adding more crumbs as needed. Refrigerate for at least 20 minutes to firm up.");
add_instruction(&panko_crusted_jackfruit_method,"To pan-fry the fillets, heat about 1cm rapeseed oil in a pan. When it shimmers, add three jackfruit fillets and cook for three to four minutes on a medium-high heat, then flip and repeat on the other side. Drain on kitchen paper as you cook the second three fillets. (Alternatively, for a lower-fat version, transfer the jackfruit fillets onto a parchment-lined tray and bake in a preheated oven at 190 degrees Celsius (374 degrees Fahrenheit) for around 30 minutes.");
add_instruction(&panko_crusted_jackfruit_method,"Reheat the squash puree and caramelised onions. Place a dollop of puree in the centre of each dinner plate, top with a small mound of onions, followed by a jackfruit fillet and finish with some chilled pickled cucumber.");
add_part(&panko_crusted_jackfruit, &panko_crusted_jackfruit_method);

// basic black bread
Recipe chilled_pickled_cucumber = create_recipe("Chilled Pickled Cucumbers", toppings, "1 serving", 20240122, 30);
set_description(&chilled_pickled_cucumber, "<p>Best served fresh, this quick pickle is great with maritime flavors like panko-crusted jackfruit or battered banana blossom, or as part of a picnic spread with vegan egg mayonnaise.</p>");
RecipePart chilled_pickled_cucumber_ingredients = create_part("Ingredients");
add_serving(&chilled_pickled_cucumber_ingredients, &cucumber, "1");
add_serving(&chilled_pickled_cucumber_ingredients, &salt, "generous pinch");
add_serving(&chilled_pickled_cucumber_ingredients, &rice_vinegar, "2 teaspoons");
add_serving(&chilled_pickled_cucumber_ingredients, &fresh_dill, "1 teaspoon, chopped");
add_part(&chilled_pickled_cucumber,&chilled_pickled_cucumber_ingredients);
RecipePart chilled_pickled_cucumber_method = create_part("Method");
add_instruction(&chilled_pickled_cucumber_method, "<p>Peel the cucumber into strips, discarding the seeded centre (a Y-shaped peeler is perfect for this, but a sharp knife will do). Sprinkle with the salt and set aside for five minutes, then squeeze the cucumber to remove excess liquid. Add the vinegart and dill and refrigerate for at least 30 minutes or until ready tro serve.</p>");
add_part(&chilled_pickled_cucumber, &chilled_pickled_cucumber_method);
RecipePart chilled_pickled_cucumber_alt = create_part("Variations");
add_instruction(&chilled_pickled_cucumber_alt, "<p>Change up the flavours and spicing by adding chili flakes, crushed pink peppercorns, or coriander seeds, or experiment with your own favorite spices.</p>");
add_part(&chilled_pickled_cucumber, &chilled_pickled_cucumber_alt);

Recipe caramelised_onion = create_recipe("Caramelised Onions", toppings, "1 serving", 20240122, 30);
set_description(&caramelised_onion, "<p>The most important ingredient for this versatile side dish is patience: allow enough time to yield all the natural sweetness of the onions and they will reward you with deep, rich flavours, providing a great contrast to main courses like our panko-crusted jackfruit.</p>");
RecipePart caramelised_onion_ingredients = create_part("Ingredients");
add_serving(&caramelised_onion_ingredients, &onion, "3, large, finely sliced");
add_serving(&caramelised_onion_ingredients, &tamari, "1 tablespoon");
add_serving(&caramelised_onion_ingredients, &rapeseed_oil, "can sub another oil");
add_part(&caramelised_onion,&caramelised_onion_ingredients);
RecipePart caramelised_onion_method = create_part("Method");
add_instruction(&caramelised_onion_method, "<p>Heat a tablespoon or two of oil in a large heavy-based saucepan over a high heat. When it shimmers, add the onions and brown them for about five minutes, stirring occasionally to prevent them from catching. Reduce the heat to low and let them sweat, covered, for another 20 minutes. Add the tamari and cook for another two or three minutes before removing from the heat and setting aside. Reheat before serving.</p>");
add_part(&caramelised_onion, &caramelised_onion_method);


Recipe *recipes[] = { &panko_crusted_jackfruit, &chilled_pickled_cucumber, &caramelised_onion};
