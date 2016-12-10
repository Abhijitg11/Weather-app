//
//  ViewController.h
//  weatherapp
//
//  Created by Student on 01/12/16.
//  Copyright (c) 2016 Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textfield;

@property (weak, nonatomic) IBOutlet UILabel *label;


- (IBAction)forecstwether:(id)sender;

@end

