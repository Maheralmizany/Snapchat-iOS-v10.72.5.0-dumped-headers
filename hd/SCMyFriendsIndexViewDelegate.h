//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SIGIndexViewDelegate.h"

@class NSString, SIGIndexView, UICollectionView;

@interface SCMyFriendsIndexViewDelegate : NSObject <SIGIndexViewDelegate>
{
    UICollectionView *_collectionView;
    SIGIndexView *_indexView;
}

- (void).cxx_destruct;
- (void)_scrollToSection:(long long)arg1;
- (void)indexView:(id)arg1 userDidSelectTitleAtIndex:(long long)arg2;
- (id)initWithCollectionView:(id)arg1 indexView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

