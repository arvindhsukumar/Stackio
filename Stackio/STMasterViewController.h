//
//  STMasterViewController.h
//  Stackio
//
//  Created by Akshay on 21/03/12.
//  Copyright (c) 2012 arvsukumar@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STDetailViewController;

#import <CoreData/CoreData.h>

@interface STMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) STDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
