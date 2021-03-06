//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NoticeButtonTapDelegate-Protocol.h"
#import "PPBaseCardDataDelegate-Protocol.h"
#import "PPPlayerDispatcherV3Delegate-Protocol.h"
#import "QIYIPaopaoActionSheetDelegate-Protocol.h"
#import "QYPPShortVideoDataDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, PPBaseCardViewController, QIYIPaopaoHistoryView, QPSearchDataManager, QYPPCustomSearchBar, QYPPDefaultLoadingView, QYPPSearchBar, UITableView, UIView;

@interface QIYIPaopaoSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, QIYIPaopaoActionSheetDelegate, UIAlertViewDelegate, PPBaseCardDataDelegate, PPPlayerDispatcherV3Delegate, QYPPShortVideoDataDelegate, NoticeButtonTapDelegate>
{
    NSString *ppVersion;
    _Bool searchWordIsClear;
    UIView *currentView;
    _Bool _bExpanding;
    UIView *navBackView;
    QYPPCustomSearchBar *_searchBar;
    _Bool _isLocalMsg;
    _Bool _isInstantSearch;
    _Bool _stillSearchOriginKeyWord;
    _Bool _isAcceptCorrection;
    unsigned long long _fromSourceType;
    unsigned long long _searchSourceType;
    NSString *_searchKeyWord;
    UITableView *_resultTableView;
    UITableView *_suggesttableView;
    QIYIPaopaoHistoryView *_historySearchView;
    QPSearchDataManager *_dataManager;
    NSMutableArray *_historyArray;
    NSMutableArray *_suggestArray;
    NSMutableArray *_hotSearchArray;
    NSString *_rPage;
    NSString *_fromPage;
    PPBaseCardViewController *_cardViewController;
    long long _suggestionIndex;
    NSString *_whenDidSuggestViewinputKeyWord;
    QYPPSearchBar *_sourceAnimationSearchView;
    UIView *_sourceNavigationBarOfPresentingViewController;
    QYPPDefaultLoadingView *_loadingAnimationView;
}

@property(retain, nonatomic) QYPPDefaultLoadingView *loadingAnimationView; // @synthesize loadingAnimationView=_loadingAnimationView;
@property(nonatomic) __weak UIView *sourceNavigationBarOfPresentingViewController; // @synthesize sourceNavigationBarOfPresentingViewController=_sourceNavigationBarOfPresentingViewController;
@property(nonatomic) __weak QYPPSearchBar *sourceAnimationSearchView; // @synthesize sourceAnimationSearchView=_sourceAnimationSearchView;
@property(copy, nonatomic) NSString *whenDidSuggestViewinputKeyWord; // @synthesize whenDidSuggestViewinputKeyWord=_whenDidSuggestViewinputKeyWord;
@property(nonatomic) long long suggestionIndex; // @synthesize suggestionIndex=_suggestionIndex;
@property(nonatomic) _Bool isAcceptCorrection; // @synthesize isAcceptCorrection=_isAcceptCorrection;
@property(retain, nonatomic) PPBaseCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(nonatomic) _Bool stillSearchOriginKeyWord; // @synthesize stillSearchOriginKeyWord=_stillSearchOriginKeyWord;
@property(nonatomic) _Bool isInstantSearch; // @synthesize isInstantSearch=_isInstantSearch;
@property(retain, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
@property(retain, nonatomic) NSString *rPage; // @synthesize rPage=_rPage;
@property(retain, nonatomic) NSMutableArray *hotSearchArray; // @synthesize hotSearchArray=_hotSearchArray;
@property(retain, nonatomic) NSMutableArray *suggestArray; // @synthesize suggestArray=_suggestArray;
@property(retain, nonatomic) NSMutableArray *historyArray; // @synthesize historyArray=_historyArray;
@property(retain, nonatomic) QPSearchDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) QIYIPaopaoHistoryView *historySearchView; // @synthesize historySearchView=_historySearchView;
@property(retain, nonatomic) UITableView *suggesttableView; // @synthesize suggesttableView=_suggesttableView;
@property(retain, nonatomic) UITableView *resultTableView; // @synthesize resultTableView=_resultTableView;
@property(copy, nonatomic) NSString *searchKeyWord; // @synthesize searchKeyWord=_searchKeyWord;
@property(nonatomic) _Bool isLocalMsg; // @synthesize isLocalMsg=_isLocalMsg;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
@property(nonatomic) unsigned long long fromSourceType; // @synthesize fromSourceType=_fromSourceType;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)handleWithEvent:(id)arg1 cell:(id)arg2 shouldSkip:(out _Bool *)arg3;
- (void)deleteFeed:(id)arg1;
- (void)refreshView:(id)arg1 dic:(id)arg2;
- (double)bottomHeight;
- (double)topHeight;
- (id)pingbackForEvent:(id)arg1 ation:(unsigned long long)arg2 orgins:(id)arg3 cardData:(id)arg4;
- (void)baseCardViewControllerDelayRefreshNoMore;
- (void)baseCardViewControllerDelayLoadMoreFailed;
- (void)baseCardViewControllerDelayLoadMoreFinished;
- (void)baseCardViewControllerDelayRefreshAndLoadMoreFinished;
- (void)baseCardViewControllerDelayRefreshFailed;
- (void)baseCardViewControllerLoadFailed;
- (void)baseCardViewControllerDelayRefreshFinished;
- (void)baseCardViewControllerLoadFinished;
- (void)p_loadDataDone;
- (void)SwipeFromBottom;
- (void)hotQueryButtonTap:(id)arg1;
- (void)historyButtonTap:(id)arg1;
- (void)moreButtonTap;
- (void)reloadAllUI;
- (void)reloadSuggestTableViewUI;
- (void)configHistoryViewUI;
- (void)reloadHistoryViewUI;
- (void)fetchSearchResultInfo:(id)arg1;
- (void)fetchSuggestSearchInfo:(id)arg1;
- (void)fetchHotQuerys;
- (void)reSearch:(id)arg1 params:(id)arg2;
- (void)startSearch:(id)arg1;
- (void)baseCardViewController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)setSearchBarCancelButton;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)changeTextFieldCloseButton:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)suggestTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)showSlectedView:(int)arg1;
- (void)paopaoAdded:(id)arg1;
- (void)paopaoQuited:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showConfirmClearHistoryAlert;
- (void)initTableView;
- (void)initSearchBar;
- (void)initNav;
- (void)dealloc;
- (void)inputKeyboardWillHide:(id)arg1;
- (void)inputKeyboardWillShow:(id)arg1;
- (void)registerKeyboardNotification;
- (void)removeKeyboardNotification;
- (long long)preferredStatusBarStyle;
- (struct CGRect)contentViewFrame;
- (struct CGRect)searchBarFrame;
- (id)currentVisibleContentView;
- (void)dismissSelfWithCustomAnimation:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 sourceAnimationSearchView:(id)arg2 navigationBarView:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

