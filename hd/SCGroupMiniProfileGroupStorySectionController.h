//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCGroupMiniProfileGroupStoryCellDelegate.h"
#import "SCMiniProfileOptionRowControllerDelegate.h"

@class NSString, SCUserSession;

@interface SCGroupMiniProfileGroupStorySectionController : SCMiniProfileSectionController <SCGroupMiniProfileGroupStoryCellDelegate, SCMiniProfileOptionRowControllerDelegate>
{
    id <SCChatGroup> _group;
    id <SCMiniProfileGroupStorySectionControllerDelegate> _delegate;
    SCUserSession *_userSession;
}

@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <SCMiniProfileGroupStorySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)optionRowControllerDidSelect:(id)arg1;
- (void)handleCellTapped;
- (void)handleAvatarTapped:(id)arg1 storySummaryInfo:(id)arg2 avatar:(id)arg3;
- (id)rowControllerAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithGroup:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

