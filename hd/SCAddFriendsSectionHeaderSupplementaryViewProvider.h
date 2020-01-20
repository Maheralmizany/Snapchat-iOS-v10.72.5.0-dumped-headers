//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionable.h"
#import "SCCollectionViewSectionSupplementaryViewProviding.h"
#import "SCCollectionViewSupplementaryViewModelsConfigurable.h"

@class NSDictionary, NSString, SCAddFriendsSectionHeaderView, SCAddFriendsSectionHeaderViewModel;

@interface SCAddFriendsSectionHeaderSupplementaryViewProvider : NSObject <SCCollectionViewSectionSupplementaryViewProviding, SCCollectionViewSupplementaryViewModelsConfigurable, SCActionable>
{
    SCAddFriendsSectionHeaderViewModel *_viewModel;
    SCAddFriendsSectionHeaderViewModel *_badgedViewModel;
    id <SCAddFriendsSectionHeaderBadgeProviding> _badgeProvider;
    SCAddFriendsSectionHeaderView *_sectionHeaderView;
    _Bool _shouldBeBadged;
    NSDictionary *_supplementaryViewModels;
    id <SCCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;
    id <SCActionHandling> _actionHandler;
}

@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) __weak id <SCCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate; // @synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate;
@property(copy, nonatomic) NSDictionary *supplementaryViewModels; // @synthesize supplementaryViewModels=_supplementaryViewModels;
- (void).cxx_destruct;
- (void)_updateViewModel;
- (struct CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2;
- (id)viewClassesForSupplementaryViewsByElementKind;
@property(readonly, nonatomic) long long sectionHeaderDisplayStrategy;
- (id)initWithHeaderViewModel:(id)arg1 badgedViewModel:(id)arg2 badgeProvider:(id)arg3;
- (id)initWithHeaderViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

