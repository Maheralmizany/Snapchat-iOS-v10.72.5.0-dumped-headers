//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCNetworkImage, SCSnapchatterAvatarContainerViewModel;

@interface SCDiscoverFeedRelatedAccountsIconViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatterAvatarContainerViewModel *_snapchatterAvatarContainerViewModel_model;
    SCNetworkImage *_networkImage_networkImage;
}

+ (id)snapchatterAvatarContainerViewModelWithModel:(id)arg1;
+ (id)networkImageWithNetworkImage:(id)arg1;
- (void).cxx_destruct;
- (void)matchSnapchatterAvatarContainerViewModel:(CDUnknownBlockType)arg1 networkImage:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

