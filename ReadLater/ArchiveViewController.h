//
//  ArchivedViewController.h
//  ReadLater
//
//  Created by Ibragim Gapuraev on 28/06/2014.
//  Copyright (c) 2014 Sermilion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Database.h"
#import "LoginViewController.h"
#import "Database.h"
#import "SHCTableViewCellDelegate.h"


@interface ArchiveViewController : UIViewController  <UITableViewDataSource, UITableViewDelegate, SHCTableViewCellDelegate>


@property (weak, nonatomic) IBOutlet UITableView *tableView;
//--------------------For Segue------------------------------//
//prperty for inbox articles of user
@property (nonatomic, strong) NSData* response;
@property (nonatomic, strong) NSMutableArray* jsonData;

@property (nonatomic, strong) NSMutableArray* articles;
@property (nonatomic, strong) NSMutableArray* safeArticles;
@property (nonatomic, strong) Database* db;
//-----------------------------------------------------------//

@property (strong, nonatomic) NSArray *data;

@end