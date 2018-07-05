//
//  Crutch.h
//  EarlGrey
//
//  Created by Jevgenij Anciferov on 6/18/18.
//  Copyright © 2018 Google Inc. All rights reserved.
//

@import Foundation;


#if !(TARGET_OS_SIMULATOR)

typedef NS_ENUM(NSInteger, XCUIDeviceButton);

@interface XCUIDevice : NSObject


@end

@interface XCTestCase : NSObject

@end

#endif
