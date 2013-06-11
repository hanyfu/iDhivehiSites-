//
//  iDhivehiSitesAppDelegate.h
//  iDhivehiSites
//
//  Created by Jinah Adam on 7/24/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>

@class iDhivehiSitesViewController;

@interface iDhivehiSitesAppDelegate : NSObject <UIApplicationDelegate> {

    UIWindow *window;

    iDhivehiSitesViewController *viewController;
	UINavigationController *navigationController;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;

@property (nonatomic, strong) IBOutlet UINavigationController *navigationController;

@property (nonatomic, strong) IBOutlet iDhivehiSitesViewController *viewController;

@end

