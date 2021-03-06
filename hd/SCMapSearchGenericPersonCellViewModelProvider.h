//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMapSearchGenericCellViewModelProvider.h"

#import "SCMapPeopleFriendsListener.h"

@class NSArray, NSString;

@interface SCMapSearchGenericPersonCellViewModelProvider : SCMapSearchGenericCellViewModelProvider <SCMapPeopleFriendsListener>
{
    id <SCMapPeopleFriendsProvider> _mapPeopleProvider;
    NSArray *_viewModels;
}

- (id)viewModels;
- (void).cxx_destruct;
- (void)_filterOutBlockedAndDeletedPeopleFromViewModels;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (id)initWithPersonViewModels:(id)arg1 mapPeopleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

