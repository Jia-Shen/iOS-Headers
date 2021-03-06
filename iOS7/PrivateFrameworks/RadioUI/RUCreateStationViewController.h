/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RUGenreListViewControllerDelegate-Protocol.h"
#import "RUSearchViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, RUGenreListViewController, RUMetricsController, RUSearchViewController, SKUICircleProgressIndicator, UILabel, UISearchDisplayController;

@interface RUCreateStationViewController : UIViewController <RUGenreListViewControllerDelegate, RUSearchViewControllerDelegate, UIScrollViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicator;
    _Bool _didLoadGenres;
    RUGenreListViewController *_genreListViewController;
    UILabel *_loadingLabel;
    RUMetricsController *_metricsController;
    NSMutableArray *_queuedMetricsOperations;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    _Bool _shouldScrollSearchBar;
    id <RUCreateStationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RUCreateStationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewForDataSourceInvalidation;
- (void)_updateSearchBarFrameForced:(_Bool)arg1;
- (struct CGRect)_searchBarSearchingFrame;
- (id)_searchDisplayController;
- (void)_addStationWithDictionary:(id)arg1;
- (void)_addMetricsControllerOperationBlock:(id)arg1;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1;
- (void)_doneAction:(id)arg1 withEvent:(id)arg2;
- (void)removeAddingIndicator;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (void)genreListViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)genreListViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)genreListViewControllerGenresDidBecomeAvailable:(id)arg1;
- (id)contentScrollView;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

