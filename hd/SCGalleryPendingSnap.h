//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCGalleryPendingSnap : NSObject
{
    id <SCGallerySnap> _snap;
    id <SCGallerySnap> _fromSnap;
}

@property(readonly, nonatomic) id <SCGallerySnap> fromSnap; // @synthesize fromSnap=_fromSnap;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
- (void).cxx_destruct;
- (id)initWithSnap:(id)arg1 fromSnap:(id)arg2;

@end

