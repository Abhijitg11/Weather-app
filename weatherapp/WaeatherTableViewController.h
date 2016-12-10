//
//  WaeatherTableViewController.h
//  weatherapp
//
//  Created by Student on 02/12/16.
//  Copyright (c) 2016 Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WaeatherTableViewController : UITableViewController<NSURLConnectionDelegate,NSURLConnectionDataDelegate>

@property(nonatomic,retain)NSMutableArray *newsarray;
@property(nonatomic,retain)NSMutableData *buffer;


@property(nonatomic,retain)NSString *tempstring;

@end
