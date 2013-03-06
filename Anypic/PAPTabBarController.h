//
//  PAPTabBarController.h
//  Anypic
//
//  Created by Héctor Ramos on 5/15/12.
//  Copyright (c) 2012 Parse. All rights reserved.
//

#import "PAPEditPhotoViewController.h"
#import "GKImagePicker.h"

@protocol PAPTabBarControllerDelegate;

@interface PAPTabBarController : UITabBarController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, GKImagePickerDelegate>

- (BOOL)shouldPresentPhotoCaptureController;

@end

@protocol PAPTabBarControllerDelegate <NSObject>

- (void)tabBarController:(UITabBarController *)tabBarController cameraButtonTouchUpInsideAction:(UIButton *)button;

@end