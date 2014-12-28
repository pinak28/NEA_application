//
//  PageContentViewController.h
//  Page Flip
//
//  Created by Pinak Shikhare on 11/24/14.
//  Copyright (c) 2014 Pinak Shikhare. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PageContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property NSUInteger pageIndex;
@property NSString *titleText;
@property NSString *imageFile;

@end
