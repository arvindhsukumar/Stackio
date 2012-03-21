//
//  STDetailViewController.h
//  Stackio
//
//  Created by Akshay on 21/03/12.
//  Copyright (c) 2012 arvsukumar@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
