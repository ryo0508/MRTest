//
//  MRTMasterViewController.h
//  MRTest
//
//  Created by Ryo Sakikawa on 4/26/13.
//  Copyright (c) 2013 Ryo Sakikawa. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MRTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
