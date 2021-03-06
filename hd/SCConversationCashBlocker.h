//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCConversationCashBlocker : NSObject <NSCopying>
{
    BOOL _blockerType;
    _Bool _requiresPasscode;
    NSString *_urlString;
}

@property(readonly, nonatomic) _Bool requiresPasscode; // @synthesize requiresPasscode=_requiresPasscode;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) BOOL blockerType; // @synthesize blockerType=_blockerType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlockerType:(BOOL)arg1 urlString:(id)arg2 requiresPasscode:(_Bool)arg3;

@end

