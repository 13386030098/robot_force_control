// Auto-generated. Do not edit!

// (in-package davinci_msg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Force {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.force_x = null;
      this.force_y = null;
      this.force_z = null;
    }
    else {
      if (initObj.hasOwnProperty('force_x')) {
        this.force_x = initObj.force_x
      }
      else {
        this.force_x = 0.0;
      }
      if (initObj.hasOwnProperty('force_y')) {
        this.force_y = initObj.force_y
      }
      else {
        this.force_y = 0.0;
      }
      if (initObj.hasOwnProperty('force_z')) {
        this.force_z = initObj.force_z
      }
      else {
        this.force_z = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Force
    // Serialize message field [force_x]
    bufferOffset = _serializer.float64(obj.force_x, buffer, bufferOffset);
    // Serialize message field [force_y]
    bufferOffset = _serializer.float64(obj.force_y, buffer, bufferOffset);
    // Serialize message field [force_z]
    bufferOffset = _serializer.float64(obj.force_z, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Force
    let len;
    let data = new Force(null);
    // Deserialize message field [force_x]
    data.force_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [force_y]
    data.force_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [force_z]
    data.force_z = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'davinci_msg/Force';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a3834bb22b09698ded602f23cb069ae6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 force_x
    float64 force_y
    float64 force_z
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Force(null);
    if (msg.force_x !== undefined) {
      resolved.force_x = msg.force_x;
    }
    else {
      resolved.force_x = 0.0
    }

    if (msg.force_y !== undefined) {
      resolved.force_y = msg.force_y;
    }
    else {
      resolved.force_y = 0.0
    }

    if (msg.force_z !== undefined) {
      resolved.force_z = msg.force_z;
    }
    else {
      resolved.force_z = 0.0
    }

    return resolved;
    }
};

module.exports = Force;
