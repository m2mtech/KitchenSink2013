//
//  AskerViewController.h
//  KitchenSink
//
//  Created by Martin Mandl on 21.07.13.
//  Copyright (c) 2013 m2m server software gmbh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AskerViewController : UIViewController

@property (nonatomic, strong) NSString *question;
@property (nonatomic, readonly) NSString *answer;

@end
