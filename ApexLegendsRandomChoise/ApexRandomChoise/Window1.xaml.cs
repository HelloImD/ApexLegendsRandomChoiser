/*
 * Created by SharpDevelop.
 * User: ADMIN
 * Date: 25.05.2020
 * Time: 18:54
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Collections.Generic;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;

namespace ApexRandomChoise
{
	/// <summary>
	/// Interaction logic for Window1.xaml
	/// </summary>
	public partial class Window1 : Window
	{
		public Window1()
		{
			InitializeComponent();
		}
		
		int randomBetween(int low, int high) {
			Random random = new Random();
			return random.Next(low, high);
		}
		
		void button1_Click(object sender, RoutedEventArgs e)
		{
			//throw new NotImplementedException();
			
			List<string> legends = new List<string>();
			
			label.Content = "";
			
			if(ch1.IsChecked ?? false) {
				legends.Add("Bangalore");
			}
			if(ch2.IsChecked ?? false) {
				legends.Add("Bloodhound");
			}
			if(ch3.IsChecked ?? false) {
				legends.Add("Wattson");
			}
			if(ch4.IsChecked ?? false) {
				legends.Add("Gibraltar");
			}
			if(ch5.IsChecked ?? false) {
				legends.Add("Caustic");
			}
			if(ch6.IsChecked ?? false) {
				legends.Add("Crypto");
			}
			if(ch7.IsChecked ?? false) {
				legends.Add("Lifeline");
			}
			if(ch8.IsChecked ?? false) {
				legends.Add("Loba");
			}
			if(ch9.IsChecked ?? false) {
				legends.Add("Mirage");
			}
			if(ch10.IsChecked ?? false) {
				legends.Add("Octain");
			}
			if(ch11.IsChecked ?? false) {
				legends.Add("Pathfinder");
			}
			if(ch12.IsChecked ?? false) {
				legends.Add("Revenant");
			}
			if(ch13.IsChecked ?? false) {
				legends.Add("Wraith");
			}
			
			int index = randomBetween(0, legends.Count);
			label.Content = legends[index];
			index = 0;
		}
	}
}