//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUSearchViewControllerDelegate.h"
#import "RUStationTreeViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, RUMetricsController, RUSearchViewController, RUStationTreeViewController, UISearchDisplayController;

@interface RUCreateStationViewController : UIViewController <RUSearchViewControllerDelegate, RUStationTreeViewControllerDelegate, UIScrollViewDelegate>
{
    RUMetricsController *_metricsController;
    NSMutableArray *_queuedMetricsOperations;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    BOOL _shouldScrollSearchBar;
    RUStationTreeViewController *_stationTreeViewController;
    id <RUCreateStationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RUCreateStationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSearchBarFrameForced:(BOOL)arg1;
- (struct CGRect)_searchBarSearchingFrame;
- (id)_searchDisplayController;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_addStationWithDictionary:(id)arg1;
- (void)_addMetricsControllerOperationBlock:(CDUnknownBlockType)arg1;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_doneAction:(id)arg1 withEvent:(id)arg2;
- (void)removeAddingIndicator;
- (void)stationTreeViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (id)contentScrollView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

