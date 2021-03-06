//
//  TableViewController.h
//  WellRead
//
//  Created by Aron Dennen on 1/21/15.
//  Copyright (c) 2015 Aron Dennen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UtilityFunctions.h"
#import "DetailViewController.h"
#import "InsertEditViewController.h"

@interface TableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource> {
    @public
    NSDictionary *completionsDict;
    NSMutableArray *completionsArray;
}

@property NSInteger theRow;
@property NSInteger theSection;

@end
