//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SCMiniProfileChatOptionsCollectionViewCell;

@protocol SCMiniProfileChatOptionsCollectionViewCellDelegate <NSObject>
- (unsigned long long)cellTypeForChatOptionsCollectionViewCell:(SCMiniProfileChatOptionsCollectionViewCell *)arg1;
- (void)chatOptionsCollectionViewCell:(SCMiniProfileChatOptionsCollectionViewCell *)arg1 didSelectChatOption:(long long)arg2;
- (long long)optionForCellAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInChatOptionsCollectionViewCell:(SCMiniProfileChatOptionsCollectionViewCell *)arg1;
@end

