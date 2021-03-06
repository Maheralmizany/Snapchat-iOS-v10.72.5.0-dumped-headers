//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendToScrollViewCoordinating.h"

@class NSArray, NSMutableDictionary, NSString, SCQueuePerformer, SCSendToScrollView;

@interface SCSendToScrollViewCoordinator : NSObject <SCSendToScrollViewCoordinating>
{
    SCSendToScrollView *_scrollView;
    NSArray *_indexOrder;
    NSMutableDictionary *_indicesWithDisplayState;
    SCQueuePerformer *_updatePerformer;
}

- (void).cxx_destruct;
- (void)_updateScrollViewFromSectionsOrder:(id)arg1;
- (void)_updateIndicesToDisplay;
- (void)_updateDisplayStateForIndices:(id)arg1 shouldDisplay:(_Bool)arg2;
- (void)_updateDisplayStateForIndex:(id)arg1 shouldDisplay:(_Bool)arg2;
- (void)_setIndexOrder:(id)arg1;
- (void)updateScrollViewFromSectionsOrder:(id)arg1;
- (void)updateDisplayStateForIndex:(id)arg1 shouldDisplay:(_Bool)arg2;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

