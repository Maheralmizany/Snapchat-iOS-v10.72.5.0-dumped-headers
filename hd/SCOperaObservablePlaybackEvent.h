//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCOperaObservablePlaybackEvent : NSObject <NSCopying>
{
    double _observeTime;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) double observeTime; // @synthesize observeTime=_observeTime;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObserveTime:(double)arg1 identifier:(id)arg2;

@end

