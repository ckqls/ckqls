//
//  DetailViewController.h
//  ckqls
//
//  Created by 차빈 on 13. 10. 2..
//  Copyright (c) 2013년 차빈. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
