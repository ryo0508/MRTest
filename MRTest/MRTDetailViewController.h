//
//  MRTDetailViewController.h
//  MRTest
//
//  Created by Ryo Sakikawa on 4/26/13.
//  Copyright (c) 2013 Ryo Sakikawa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MRTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
