//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPostRegAddFriendsCollectionCellViewModelGenerator : NSObject
{
    id <SCPostRegAddFriendsTracking> _postRegAddFriendsTracker;
    _Bool _isUnaddEnabled;
}

- (void).cxx_destruct;
- (id)_addFriendsButtonTextWithSnapchatter:(id)arg1 displayType:(long long)arg2 isLoading:(_Bool)arg3;
- (id)_addFriendsButtonImageWithSnapchatterAddedStatus:(_Bool)arg1;
- (_Bool)_isSnapchatterAdded:(id)arg1 isLoading:(_Bool)arg2;
- (id)_createAddFriendsActionButtonViewModelWithSnapchatter:(id)arg1 displayType:(long long)arg2 indexPath:(id)arg3 addSourceType:(long long)arg4 isLoading:(_Bool)arg5;
- (id)_createSnapchatterCollectionViewCellViewModelWithSnapchatter:(id)arg1 indexPath:(id)arg2 sectionType:(id)arg3 isLoading:(_Bool)arg4 sourcePageType:(id)arg5 rowsInSection:(unsigned long long)arg6;
- (CDUnknownBlockType)postRegAddFriendsCollectionCellViewModelGeneratingBlock;
- (id)initWithPostRegAddFriendsTracker:(id)arg1 isUnaddEnabled:(_Bool)arg2;

@end
