//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSValue;

@interface SCAddFriendsBadgedButtonViewModel : NSObject <NSCopying>
{
    _Bool _showBadgeNumber;
    NSValue *_preferredSize;
    NSString *_imageName;
    NSString *_alternativeImageName;
    unsigned long long _badgeNumber;
}

@property(readonly, nonatomic) _Bool showBadgeNumber; // @synthesize showBadgeNumber=_showBadgeNumber;
@property(readonly, nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(readonly, copy, nonatomic) NSString *alternativeImageName; // @synthesize alternativeImageName=_alternativeImageName;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy, nonatomic) NSValue *preferredSize; // @synthesize preferredSize=_preferredSize;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPreferredSize:(id)arg1 imageName:(id)arg2 alternativeImageName:(id)arg3 badgeNumber:(unsigned long long)arg4 showBadgeNumber:(_Bool)arg5;

@end

