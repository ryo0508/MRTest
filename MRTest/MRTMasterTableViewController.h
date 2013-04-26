//
//  MTRMasterTableViewController.h
//  MRTest
//
//  Created by Ryo Sakikawa on 4/26/13.
//  Copyright (c) 2013 Ryo Sakikawa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface MRTMasterTableViewController : UITableViewController

-(UITableViewCell *)configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;

@end
