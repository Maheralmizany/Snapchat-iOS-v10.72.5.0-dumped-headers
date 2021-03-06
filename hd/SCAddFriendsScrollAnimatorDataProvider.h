//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAddFriendsScrollAnimatorDataProviding.h"

@class NSObject<NSCopying>, SCHeaderViewModel, SCSearchNavigationBarViewModel;

@interface SCAddFriendsScrollAnimatorDataProvider : NSObject <SCAddFriendsScrollAnimatorDataProviding>
{
    SCHeaderViewModel *_headerViewModel;
    SCSearchNavigationBarViewModel *_searchBarViewModel;
}

+ (id)dataProviderForRegistrationWithHeaderText:(id)arg1;
+ (id)dataProviderWithHeaderText:(id)arg1 headerBackgroundColor:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *searchBarViewModel;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *headerViewModel;
- (id)initWithHeaderViewModel:(id)arg1 searchBarViewModel:(id)arg2;

@end

