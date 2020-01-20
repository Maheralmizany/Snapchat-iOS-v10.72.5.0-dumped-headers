//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCOperaPlayerViewModel : NSObject <NSCopying>
{
    _Bool _isHidden;
    NSString *_accessibilityID;
    NSString *_accessibilityLabel;
}

@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) NSString *accessibilityID; // @synthesize accessibilityID=_accessibilityID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessibilityID:(id)arg1 accessibilityLabel:(id)arg2 isHidden:(_Bool)arg3;

@end
