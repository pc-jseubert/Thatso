//
//  GameViewControllerTableViewController.h
//  Thatso
//
//  Created by John A Seubert on 9/19/14.
//  Copyright (c) 2014 John Seubert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PHFComposeBarView.h"


@interface GameViewControllerTableViewController : UIViewController <CommsDelegate,DidAddCommentDelegate, DidGetCommentsDelegate, DidStartNewRound, PHFComposeBarViewDelegate,UITextViewDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    NSDateFormatter *_dateFormatter;
    NSMutableArray* nonUserPlayers;
    NSInteger* winningIndex;
}


@property (strong, nonatomic) IBOutlet UILabel *headerView;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) IBOutlet UIRefreshControl *refreshControl;
@property (strong, nonatomic) IBOutlet PHFComposeBarView *composeBarView;

@property(nonatomic) PFObject *currentGame;
@property(nonatomic) PFObject *currentRound;
@property(nonatomic) NSMutableArray* comments;
@property(nonatomic) NSString* previousComment;
@property(nonatomic) NSMutableArray* votedForComments;
@property(nonatomic) UITapGestureRecognizer *singleTap;
@end
