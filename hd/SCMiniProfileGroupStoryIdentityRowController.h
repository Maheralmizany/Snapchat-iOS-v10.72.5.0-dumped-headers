//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

#import "SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate.h"

@class SCStoriesCustomStoryMetadata, SCUserSession;

@interface SCMiniProfileGroupStoryIdentityRowController : SCMiniProfileRowController <SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate>
{
    SCUserSession *_userSession;
    SCStoriesCustomStoryMetadata *_customStory;
    id <SCMiniProfileGroupStoryIdentityRowControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)groupStoryIdentityCollectionViewCell:(id)arg1 didTapThumbnailView:(id)arg2;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (id)initWithUserSession:(id)arg1 customStory:(id)arg2 delegate:(id)arg3;

@end
