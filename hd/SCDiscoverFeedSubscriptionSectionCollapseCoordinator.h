//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedSectionCollapseCoordinating.h"

@class NSString;

@interface SCDiscoverFeedSubscriptionSectionCollapseCoordinator : NSObject <SCDiscoverFeedSectionCollapseCoordinating>
{
    id <SCDiscoverFeedDataFetching> _dataFetching;
    long long _collapseState;
    id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> _delegate;
    NSString *_sectionType;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic) __weak id <SCDiscoverFeedSectionCollapseCoordinatingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long collapseState; // @synthesize collapseState=_collapseState;
- (void).cxx_destruct;
- (void)collapseProcessWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setCollapseState:(long long)arg1;
- (id)initWithSectionType:(id)arg1 dataFetching:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
