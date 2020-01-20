//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@protocol SCComposerMediaImageProtocol <NSObject, SCComposerMarshallable>
- (void)dispose;
- (void)getPngDataWithCallback:(void (^)(NSData *, NSString *))arg1;
- (void)rotateWithAngle:(double)arg1 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg2;
- (void)cropWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg5;
- (void)resizeWithWidth:(double)arg1 height:(double)arg2 callback:(void (^)(id <SCComposerMediaImageProtocol>, NSString *))arg3;
- (double)getHeight;
- (double)getWidth;
@end

