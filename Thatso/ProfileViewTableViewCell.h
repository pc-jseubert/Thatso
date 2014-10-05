//
//  ProfileViewTableViewCell.h
//  Thatso
//
//  Created by John A Seubert on 9/19/14.
//  Copyright (c) 2014 John Seubert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProfileViewTableViewCell : UITableViewCell
@property (nonatomic, strong) IBOutlet UIImageView *profilePicture;
@property (nonatomic, strong) IBOutlet UILabel *nameLabel;

-(void)setColorScheme:(int) code;
@end
