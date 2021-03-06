//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface SCMapEffectVariant : NSObject <NSCopying>
{
    _Bool _forceDisplayWhenClusterTapped;
    _Bool _onlyPlayOncePerMapSession;
    double _minZoomLevel;
    double _maxZoomLevel;
    NSURL *_url;
    unsigned long long _minClientVersion;
}

@property(readonly, nonatomic) unsigned long long minClientVersion; // @synthesize minClientVersion=_minClientVersion;
@property(readonly, nonatomic) _Bool onlyPlayOncePerMapSession; // @synthesize onlyPlayOncePerMapSession=_onlyPlayOncePerMapSession;
@property(readonly, nonatomic) _Bool forceDisplayWhenClusterTapped; // @synthesize forceDisplayWhenClusterTapped=_forceDisplayWhenClusterTapped;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) double maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(readonly, nonatomic) double minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRemoteURL:(id)arg1 minZoomLevel:(double)arg2 maxZoomLevel:(double)arg3 forceDisplayWhenClusterTapped:(_Bool)arg4 onlyPlayOncePerMapSession:(_Bool)arg5 minClientVersion:(unsigned long long)arg6;

@end

