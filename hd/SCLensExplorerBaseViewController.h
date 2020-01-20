//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCScrollToEndDetectorDelegate.h"
#import "SCSearchQueryResultControllerDelegate.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, SCLensExplorerEventsController, SCScrollToEndDetector, SCSearchQueryResultController, UIView<SCLensExplorerContentProtocol>;

@interface SCLensExplorerBaseViewController : UIViewController <SCScrollToEndDetectorDelegate, SCSearchQueryResultControllerDelegate, UICollectionViewDelegate>
{
    SCScrollToEndDetector *_scrollToBottomDetector;
    _Bool _sectionsAdded;
    _Bool _pageOpened;
    UIView<SCLensExplorerContentProtocol> *_contentView;
    SCSearchQueryResultController *_queryResultController;
    SCLensExplorerEventsController *_eventsController;
}

@property(readonly, nonatomic) SCLensExplorerEventsController *eventsController; // @synthesize eventsController=_eventsController;
@property(readonly, nonatomic) SCSearchQueryResultController *queryResultController; // @synthesize queryResultController=_queryResultController;
@property(readonly, nonatomic) UIView<SCLensExplorerContentProtocol> *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_setupKarma;
- (void)_ensureInitialized;
- (void)_addSections;
- (void)_prepareQueryResultController;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (void)searchQueryResultControllerDidSkipUpdateQueryResult:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToEndDetector:(id)arg1 scrollViewWillReachEnd:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)sectionWithSectionId:(id)arg1;
- (_Bool)resultHasContent;
- (id)pageTypeSpecific;
- (unsigned long long)pageType;
- (void)onScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onScrollViewDidEndDecelerating:(id)arg1;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onScrollViewDidScroll:(id)arg1;
- (void)onScrollViewWillReachEnd;
@property(readonly, nonatomic) NSArray *sections;
- (void)didReceiveMemoryWarning;
- (id)initWithEventsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
