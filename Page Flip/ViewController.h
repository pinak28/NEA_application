//
//  ViewController.h
//  Page Flip
//
//  Created by Pinak Shikhare on 11/24/14.
//  Copyright (c) 2014 Pinak Shikhare. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController <UIPageViewControllerDataSource>
@property (weak, nonatomic) IBOutlet UIButton *startWalkthrough;

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;

@end

