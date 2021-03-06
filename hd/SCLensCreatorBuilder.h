//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCLensCreatorBuilder : NSObject
{
    NSString *_userId;
    NSString *_userAvatarId;
    NSString *_userSelfieId;
    NSString *_snapProIdentifier;
    _Bool _snapProIsDeactivated;
    _Bool _isOfficialCreator;
}

+ (id)withLensCreator:(id)arg1;
- (void).cxx_destruct;
- (id)setIsOfficialCreator:(_Bool)arg1;
- (id)setSnapProIsDeactivated:(_Bool)arg1;
- (id)setSnapProIdentifier:(id)arg1;
- (id)setUserSelfieId:(id)arg1;
- (id)setUserAvatarId:(id)arg1;
- (id)setUserId:(id)arg1;
- (id)build;

@end

