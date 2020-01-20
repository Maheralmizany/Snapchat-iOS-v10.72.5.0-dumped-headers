//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAddFriendsTakeOverCollectionViewMutating.h"

@class SCBehaviorSubject, SCLazy, SCSectionBasedCollectionViewUpdater, UICollectionView;

@interface SCAddFriendsTakeoverQuickAddCarouselController : NSObject <SCAddFriendsTakeOverCollectionViewMutating>
{
    UICollectionView *_collectionView;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    SCLazy *_sectionDataProvider;
    SCBehaviorSubject *_quickAddCarouselDisplaySubject;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (id)_quickAddCarouselSectionSupplementaryViewProvider;
- (id)_quickAddCarouselSectionConfiguration;
- (void)reloadWithCollectionView:(id)arg1 relatedUserId:(id)arg2;
- (id)initWithSectionDataProvider:(id)arg1 displayDateObservable:(id)arg2 actionHandler:(id)arg3;

@end

