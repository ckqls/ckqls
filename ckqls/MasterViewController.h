//
//  MasterViewController.h
//  ckqls
//
//  Created by 차빈 on 13. 10. 2..
//  Copyright (c) 2013년 차빈. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
