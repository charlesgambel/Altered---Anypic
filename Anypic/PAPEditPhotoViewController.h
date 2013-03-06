//
//  PAPEditPhotoViewController.h
//  Anypic
//
//  Created by Héctor Ramos on 5/3/12.
//  Copyright (c) 2012 Parse. All rights reserved.
//

@interface PAPEditPhotoViewController : UIViewController <UITextFieldDelegate, UIScrollViewDelegate>

- (id)initWithImage:(UIImage *)aImage;

@property (nonatomic, strong) UIImage* imageFromOthers;

-(void)uploadPhoto:(UIImage*)image;
@end
