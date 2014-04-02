//
//  MasterViewController.h
//  Money Book
//
//  Created by  Caveman on 14-4-2.
//
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
