//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCCGeoPoint;

@interface SCCGeoRect : SCComposerMarshallableObject
{
    SCCGeoPoint *_sw;
    SCCGeoPoint *_ne;
}

@property(retain, nonatomic) SCCGeoPoint *ne; // @synthesize ne=_ne;
@property(retain, nonatomic) SCCGeoPoint *sw; // @synthesize sw=_sw;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithSw:(id)arg1 ne:(id)arg2;

@end

