//
//  ViewController.m
//  weatherapp
//
//  Created by Student on 01/12/16.
//  Copyright (c) 2016 Student. All rights reserved.
//
#import "WaeatherTableViewController.h"
#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)forecstwether:(id)sender {
    
    WaeatherTableViewController *wtc=[[WaeatherTableViewController alloc]init];
    wtc.tempstring=_textfield.text;
    
    
    [self performSegueWithIdentifier:@"forecast" sender:nil];

}
@end
