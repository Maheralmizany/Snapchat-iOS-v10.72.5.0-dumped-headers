//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCLensInfoCardPresentationInfo : NSObject <NSCopying>
{
    _Bool _isOfficialCreator;
    _Bool _isProfileViewable;
    _Bool _isFavoriteButtonVisible;
    NSString *_lensName;
    NSString *_creatorName;
}

+ (id)lensInfoCard_infoFromInfoCardData:(id)arg1 isProfileViewable:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isFavoriteButtonVisible; // @synthesize isFavoriteButtonVisible=_isFavoriteButtonVisible;
@property(readonly, nonatomic) _Bool isProfileViewable; // @synthesize isProfileViewable=_isProfileViewable;
@property(readonly, nonatomic) _Bool isOfficialCreator; // @synthesize isOfficialCreator=_isOfficialCreator;
@property(readonly, copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(readonly, copy, nonatomic) NSString *lensName; // @synthesize lensName=_lensName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensName:(id)arg1 creatorName:(id)arg2 isOfficialCreator:(_Bool)arg3 isProfileViewable:(_Bool)arg4 isFavoriteButtonVisible:(_Bool)arg5;

@end

