#include <stdio.h>
#include <conio.h>
int main() {
int temp, total_amount, total_items_ordered;
char *selected_item_name_arr[5];
int selected_item_quantity[5];
total_amount = 0;
total_items_ordered = 0;
printf("\tMenu\n");
printf("[1] 1x Rice - price 90\n[2] 1x Daal - price 50\n[3] 1x Noodles - price 180\n[4] 1x Pizza - price 250\n\n");
printf("You can only order up to 5 different items from the menu!\n\n");
while (1) {
printf("Enter the number of the item you want to place an order (0 to exit): ");
scanf("%d", &temp);
if (temp == 0) break;
if( temp > 4) {
printf("looks like you selected wrong number!\n");
continue;
}
if (total_items_ordered >= 5) {
printf("You have reached the maximum limit of 5 items. Cannot add more items.\n");
break;
}
int temp_quantity;
printf("Select the quantity: ");
scanf("%d", &temp_quantity);

if (temp_quantity == 0){
printf("The order was canceled by the user! ,Enter a number greater then 0!\n");
continue;
} 
else {
switch (temp) {
case 1:
selected_item_name_arr[total_items_ordered] = "Rice";
selected_item_quantity[total_items_ordered] = temp_quantity;
total_amount += temp_quantity * 90;
printf("Your Order for %d Rice has been placed\n", temp_quantity);
total_items_ordered++;
break;
case 2:
selected_item_name_arr[total_items_ordered] = "Daal";
selected_item_quantity[total_items_ordered] = temp_quantity;
total_amount += temp_quantity * 50;
printf("Your Order for %d Daal has been placed\n", temp_quantity);
total_items_ordered++;
break;
case 3:
selected_item_name_arr[total_items_ordered] = "Noodles";
selected_item_quantity[total_items_ordered] = temp_quantity;
total_amount += temp_quantity * 180;
printf("Your Order for %d Noodles has been placed\n", temp_quantity);
total_items_ordered++;
break;
case 4:
selected_item_name_arr[total_items_ordered] = "Pizza";
selected_item_quantity[total_items_ordered] = temp_quantity;
total_amount += temp_quantity * 250;
printf("Your Order for %d Pizza has been placed\n", temp_quantity);
total_items_ordered++;
break;
}}}

if (total_items_ordered > 0) {
printf("Your order is as follows:\n");
for (int i = 0; i < total_items_ordered; i++) {
printf("Item: %s, Quantity: %d\n", selected_item_name_arr[i], selected_item_quantity[i]);
}
printf("Total Amount: %d (This is without 10%% discount!)\n", total_amount);
float nettotal;
nettotal = total_amount - ( total_amount * 0.10);
printf("Amount Payable: %f ( after 10%% discount!)", nettotal);
} else {
printf("Looks like you didnt order anything from us!\n");
}
getch();
return 0;
}
