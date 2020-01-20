//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCAdReportTrackInfo : NSObject <NSCopying>
{
    _Bool _adFlagged;
    NSString *_adFlaggedReason;
    NSString *_adFlaggedNote;
}

@property(readonly, copy, nonatomic) NSString *adFlaggedNote; // @synthesize adFlaggedNote=_adFlaggedNote;
@property(readonly, copy, nonatomic) NSString *adFlaggedReason; // @synthesize adFlaggedReason=_adFlaggedReason;
@property(readonly, nonatomic) _Bool adFlagged; // @synthesize adFlagged=_adFlagged;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdFlagged:(_Bool)arg1 adFlaggedReason:(id)arg2 adFlaggedNote:(id)arg3;

@end

